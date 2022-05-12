#!/usr/bin/env python3
import argparse
import sys
import json

from refactoring import Document, DETECTOR


def main():
    """
    Run the command-line genderbias interface.

    For help, see `genderbias --help`.

    """
    parser = argparse.ArgumentParser(description="CLI for code-refactoring")
    parser.add_argument(
        "--file", "-f", dest="file", required=False, help="The file to check"
    )
    parser.add_argument(
        "--json",
        "-j",
        dest="json",
        required=False,
        default=False,
        action="store_true",
        help="Enable JSON output, instead of text",
    )

    parser.add_argument(
        "--no-color",
        dest="no_color",
        required=False,
        default=False,
        action="store_true",
        help="Use plaintext output (instead of color + formatting)",
    )


    args = parser.parse_args()

    if args.list_detectors:
        print("AVAILABLE DETECTORS:")
        for class_name in Document:
            print(" " + class_name)
        sys.exit(0)

    if args.detectors:
        if args.detectors in Document:
            detectors = [Document[args.detectors]]
        else:
            print("Detector named '{}' not available.".format(args.detectors))
            sys.exit(1)
    else:
        detectors = Document.values()

    if not args.file:
        # If no file is passed, then read from stdin
        doc = Document(sys.stdin.read())
    else:
        # Otherwise, load the file
        doc = Document(args.file)

    reports = []
    for detector in detectors:
        reports.append(detector().get_report(doc))

    if not args.json:
        if args.no_color:
            print(
                "\n".join(
                    report.pprint(use_color=False)
                    for report in reports
                    if len(report.get_flags())
                )
            )
        else:
            print(
                "\n".join(
                    report.pprint() for report in reports if len(report.get_flags())
                )
            )
    else:
        reports_data = [report.to_dict() for report in reports]
        print(json.dumps(reports_data))


if __name__ == "__main__":
    main()
