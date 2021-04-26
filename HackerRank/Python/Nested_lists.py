if __name__ == '__main__':
    m = []
    score_list =[] 
    for i in range(int(raw_input())):
        l = []
        name = raw_input()
        score = float(raw_input())
        l.append(name)
        l.append(score)
        score_list.append(score)
        m.append(l)

score_list.sort()
m.sort()
min_no = score_list[0]
while score_list[1] == min_no:
    score_list.pop(1)
    
min_no = score_list[1]
    
for i in range(len(m)):
    if m[i][1] == min_no:
        print(m[i][0])
        
    
