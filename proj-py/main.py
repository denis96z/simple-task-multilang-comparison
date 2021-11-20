#!python3
import sys


def main(argv):
    n = int(argv[0])
    for i in range(n):
        s = f'STRING #{i}'
        print(s)


if __name__ == '__main__':
    if len(sys.argv) != 2:
        print("USAGE: main.py number", file=sys.stderr)
        exit(1)
    main(sys.argv[1:])
