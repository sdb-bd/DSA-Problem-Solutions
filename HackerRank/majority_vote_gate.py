# Problem link: https://www.hackerrank.com/contests/ai-ml-module-4-practice-day-1/challenges/b5-majority-vote-gate-simple-ensemble/problem?isFullScreen=true

n = int(input())

yes_count = 0
no_count = 0

for i in range(n):
    vote = input()
    if vote == "YES":
        yes_count += 1
    else:
        no_count += 1

if yes_count >= no_count:
    print("ACCEPT")
else:
    print("REJECT")