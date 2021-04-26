if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
arr.sort(reverse = True)
k = arr[0]
for i in range(1,len(arr)):
    if(arr[i]!= k):
        print(arr[i])
        break
