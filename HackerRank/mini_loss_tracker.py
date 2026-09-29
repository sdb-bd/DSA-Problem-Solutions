# Problem link: https://www.hackerrank.com/contests/ai-ml-module-4-practice-day-1/challenges/b4-mini-loss-tracker-average-monitor/problem?isFullScreen=true

n = int(input())
target = float(input())

total = 0
for i in range(n):
    loss = float(input())
    total += loss
average = total / n
 
if average <= target:
    print("PASS")
else:
    print("RETRY")