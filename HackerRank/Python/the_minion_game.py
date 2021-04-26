vowels = ['A', 'E','I','O','U']
Stuart = 5 #consonants
Kevin = 5   #vowels

def minion_game(string):
    global Stuart,Kevin
    # your code goes here
    list_name = ''
    for i in range(0,len(string)):
        if string[i] in vowels:
            Kevin = Kevin + (len(string) - i)
        else:
            Stuart = Stuart + (len(string)-i)

    Stuart = Stuart - 5
    Kevin = Kevin - 5
    if Stuart > Kevin:
        print("Stuart",end = " ")
        print(Stuart)
    elif(Stuart == Kevin):
        print("Draw")
    else:
        print("Kevin",end = " ")
        print(Kevin)

if __name__ == '__main__':
    s = input()
    minion_game(s)
