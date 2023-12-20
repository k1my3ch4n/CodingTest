# k의 개수

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120887)

## 풀이 아이디어

i 부터 j 까지의 숫자 중 k가 있는 숫자를 구한 다음 , 그 숫자 안에서 k가 있는 만큼 숫자를 더한다.

```py
def solution(i, j, k):
    answer = 0

    for l in range(i, j+1):
        if str(k) in str(l):
            for m in str(l):
                if(m == str(k)):
                    answer += 1

    return answer
```

## 다른 사람의 풀이

나와 같은 아이디어로 풀었는데 , 파이썬의 특성으로 한 줄로 줄여서 작성한 것 같다. 파이썬 한 줄로 작성하는데 익숙하지 않아서 조금 더 연습이 필요할 것 같다.

```py
def solution(i, j, k):
    answer = sum([ str(i).count(str(k)) for i in range(i,j+1)])
    return answer
```
