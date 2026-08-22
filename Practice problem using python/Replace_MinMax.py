n = int(input())
numbers = list(map(int,input().split()))

minimum_number = numbers[0]
maximum_number = numbers[0]

minimum_position = 0
maximum_position = 0

for i in range(1,n):
    if numbers[i]<minimum_number:
        minimum_number=numbers[i]
        minimum_position = i
for i in range(1,n):
    if numbers[i]>maximum_number:
        maximum_number=numbers[i]
        maximum_position = i
numbers[minimum_position],numbers[maximum_position] = numbers[maximum_position], numbers[minimum_position]
print(*numbers)
