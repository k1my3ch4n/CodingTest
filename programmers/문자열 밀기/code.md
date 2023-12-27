# 문자열 밀기

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120921)

## 풀이 아이디어

A를 하나씩 밀어서 처음 값을 넘어가면 -1 , 그게 아니라면 옮긴 횟수를 리턴한다.

```py
def solution(A, B):
    answer = 0

    a = len(A)

    while True:
        if(A == B):
            return answer

        if(answer > a):
            return -1

        str1 = A[-1] + A[:a-1]
        A = str1

        answer += 1
```

## 다른 사람의 풀이

B 두개를 붙인 후 , A 를 찾은 다음 그 숫자를 리턴하는 함수다. 너무 좋은 아이디어인 것 같다.

```py
def solution(i, j, k):
    solution=lambda a,b:(b*2).find(a)
```
