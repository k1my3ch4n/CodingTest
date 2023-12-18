# 옹알이 ( 1 )

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120956)

## 풀이 아이디어

전체 단어들을 돌면서 , 한번 나온 값을 제외하고 이어서 단어를 만들어서 dictionary를 만든다. 그 이후 제시된 단어들이 dictionary에 있다면 1을 더하고 , 그 값을 리턴한다.

```py
def solution(babbling):
    answer = 0

    dic = ['aya' , 'ye', 'woo', 'ma']
    arr = ['aya' , 'ye', 'woo', 'ma']

    for _ in range(3):
        ar = []

        for i in arr:
            for j in dic:
                if(i not in j):
                    k = j + i
                    ar.append(k)
        dic = dic + ar


    for i in babbling:
        if(i in dic):
            answer += 1

    return answer
```

## 다른 사람의 풀이

정규표현식을 사용하면 아주 간단하게 풀 수 있었다. 정석적인 답이라고 생각하고 , 자주 사용해야겠다.

```py
import re

def solution(babbling):
    regex = re.compile('^(aya|ye|woo|ma)+$')
    cnt=0
    for e in babbling:
        if regex.match(e):
            cnt+=1
    return cnt
```
