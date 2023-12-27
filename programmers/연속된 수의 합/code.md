# 연속된 수의 합

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120923)

## 풀이 아이디어

중간값을 구하고 , 짝수 / 홀수에 맞춰서 다르게 구해서 넣어준다.

```py
def solution(num, total):
    answer = []

    k = int(num / 2)
    l = int(total / num)

    if(num % 2 == 0):
        for i in range(l - k + 1 , l + k + 1):
            answer.append(i)
    else:
        for i in range(l - k , l+k+1):
            answer.append(i)

    return answer
```

## 다른 사람의 풀이

중간값을 계산하지 않고 , 한번에 등차수열로 구하는 방법이다. 수학적 지식도 훌륭하고 , 코드도 굉장히 잘 사용한 것 같다.

```py
def solution(num, total):
    return [(total - (num * (num - 1) // 2)) // num + i for i in range(num)]
```
