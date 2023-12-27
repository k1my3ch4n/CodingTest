# 종이 자르기

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120922)

## 풀이 아이디어

처음 M - 1 만큼 자르고 , M 개의 갯수를 N - 1 번 자르기 때문에 한 번에 구할 수 있다.

```py
def solution(M, N):
    return M - 1 + M * ( N - 1 )
```

## 다른 사람의 풀이

내가 계산한 버전의 다른 풀이다.

```py
def solution(M, N):
    return (M * N) - 1
```
