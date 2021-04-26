if __name__ == '__main__':
    n = int(raw_input())
    student_marks = {}
    for _ in range(n):
        line = raw_input().split()
        name, scores = line[0], line[1:]
        scores = map(float, scores)
        student_marks[name] = scores
    query_name = raw_input()

avg = 0.00
for i in range(0,len(student_marks[query_name])):
    avg += student_marks[query_name][i]

avg = avg/len(student_marks[query_name])
print('%.2f'%avg)
