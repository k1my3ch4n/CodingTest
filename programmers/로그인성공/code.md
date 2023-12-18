# 로그인 성공 ?

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120883)

## 풀이 아이디어

아이디와 비밀번호가 같으면 `login` 을 리턴한다. 아이디만 같으면 `sameId` 를 1로 저장해 두고 , `sameId` 가 1이면 `wrong pw` 를 , 0이면 `fail` 을 리턴한다.

```py
def solution(id_pw, db):
    userId = id_pw[0]
    userPw = id_pw[1]

    sameId = 0

    for i in db:
        if(i[0] == userId and i[1] == userPw):
            return 'login'

        if(i[0] == userId and i[1] != userPw):
            sameId = 1

    if(sameId == 1):
        return 'wrong pw'
    else:
        return 'fail'
```

## 다른 사람의 풀이

dict와 `:-` 라는 새로운 연산자를 사용했는데 , 해당 연산자는 할당과 연산을 한 번에 가능하게 하는 연산자이다. 나는 아이디로 비교했는데 , 비밀번호만 비교 후 아이디를 비교하는 방법도 좋은 것 같다.

```py
def solution(id_pw, db):
    if db_pw := dict(db).get(id_pw[0]):
        return "login" if db_pw == id_pw[1] else "wrong pw"
    return "fail"
```
