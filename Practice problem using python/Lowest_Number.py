n = int(input())
numbers = list(map(int,input().split()))
lowest_number = numbers[0]
position=1
for i in range(1,n):
    if numbers[i]<lowest_number:
        lowest_number = numbers[i]
        position = i+1
print(lowest_number,position)