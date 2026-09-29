# Problem link: https://www.hackerrank.com/contests/ai-ml-module-4-practice-day-1/challenges/b1-smart-light-pilot-threshold/problem?isFullScreen=true

brightness,threshold = map(float,input().split())
if brightness >= threshold:
    print("ON")
else:
    print("OFF")
