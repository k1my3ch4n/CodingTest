# 치킨 쿠폰

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120884)

## 풀이 아이디어

10개씩 나누어서 그 몫을 더하고 , 그 몫과 나눈 나머지를 더해서 또 나누고 .. 그걸 반복해서 더한 값을 구한다.

```py
def solution(chicken):
    answer = 0

    while chicken >= 10:
        k = int(chicken / 10)
        l = int(chicken % 10)

        answer += k
        chicken = k + l

    return answer
```

## 다른 사람의 풀이

10%의 10%의 10%의 ... 내 생각에 이 사람은 수학쪽으로 가야 하지 않을까 .. 아이디어가 굉장하다 .

```py
def solution(chicken):
    return int(chicken*0.11111111111)
```
