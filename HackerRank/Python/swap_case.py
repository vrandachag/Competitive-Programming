def swap_case(s):
    str1 = ''
    for i in range(0,len(s)):
        if s[i].islower():
            str1 = str1 + s[i].upper()
        else:
            str1 = str1 + s[i].lower()
    return str1

if __name__ == '__main__':
