import textwrap

def wrap(string, max_width):
    str1 = ''
    i = 0
    while (i<len(string)):
        str1 = str1 + string[i:i+max_width] + "\n"
        i = i + max_width
    return str1

if __name__ == '__main__':
