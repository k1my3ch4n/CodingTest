# A 로 B 만들기

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120886)

## 풀이 아이디어

before 와 after 를 list 로 변환 후 정렬해서 비교한다.

```py
def solution(before, after):
    arr1 = sorted(list(before))
    arr2 = sorted(list(after))

    if(arr1 == arr2):
        return 1

    return 0
```

## 다른 사람의 풀이

list 를 하지 않고도 정렬이 되는 것 같다. 무리해서 list 를 사용하지 않아도 될 것 같다.

```py
def solution(before, after):
    before=sorted(before)
    after=sorted(after)
    if before==after:
        return 1
    else:
        return 0
```
