# Enter your code here. Read input from STDIN. Print output to STDOUT
S = ''
S = input()
x = sorted(S,reverse = True)
str1 = "" 
x = str1.join(x)
str2 = ''
even_str = ''
odd_str = ''
upper_str = ''
for i in range(0,len(x)):
    if(x[i]>='a' and x[i]<='z'):
        str2 = x[i] + str2
    elif x[i]>='A' and x[i]<='Z':
        upper_str = x[i]+ upper_str
    elif int(x[i])%2 == 0:
        even_str = x[i] + even_str
    elif int(x[i])%2 != 0:
        odd_str = x[i]+odd_str

print(str2+upper_str+odd_str+even_str)
