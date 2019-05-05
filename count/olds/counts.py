#!/usr/bin/python3

import sys
import io

_BUFFER_SIZE = io.DEFAULT_BUFFER_SIZE

_EXIT_NORMAL = 0
_EXIT_ERROR = 1

def main():
    if len(sys.argv) != 2:
        print('usage: {} [FILE]'.format(sys.argv[0]))
        sys.exit(_EXIT_NORMAL)

    try:

        lnum = 0
        with open(sys.argv[1], 'rb') as infile:
            while True:
                _buffer = infile.read(_BUFFER_SIZE)

                if not _buffer:
                    break

                lnum += _buffer.count(b'\n')

        print(lnum)

    except Exception as e:
        print("error: {}".format(e))

if __name__ == '__main__':
    main()

