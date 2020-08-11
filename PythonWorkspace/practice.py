# print(5)
# print(-10)
# print(3.14)
# print(1000)
# print(5+3)

# print(5 > 10)
# print(5 < 10)
# print(True)
# print(False)
# print(not True)
# print(not False)
# print(not (5 > 10))

# # 애완동물을 소개해 주세요~
# animal = "강아지"
# name = "연탄이"
# age = 4
# hobby = "산책"
# is_adult = age >= 3
# print(is_adult)
# print("우리집" +animal+ "의 이름은 "+name+"에요")
# print(name + "는 " + str(age) +" 살이며, " + hobby + "을 아주 좋아해요")
# print("연탄이는 어른일까요?" + str(is_adult))


# #연산자
# print(1+1)
# print(3-2)
# print(5*2)
# print(6/3)
# print(2**3)
# print(5%3)
# print(5//3)
# print(10%3)
# print(10//3)
# print(10 > 3)
# print(4 >= 7) # False
# print(5 <= 5)
# print(3 == 3)
# print(4 == 4)
# print(3+4 == 7)

# print(1 != 3)
# print(not(1 != 3))
# print((3 > 0) and (3 < 5))
# print((3 > 0) & (3 < 5))

# print((3 > 0) or (3 > 5))
# print((3 > 0) | (3 > 5))

# print(5 > 4 > 3)
# print(5 > 4 > 7)

# # 수식

# print(2 + 3 * 4)
# print((2+3) * 4)
# number = 2 + 3 * 4
# print(number)

# print(abs(-5 ))
# print(pow(4, 2))
# print(max(5, 12))
# print(min(5, 12))
# print(round(3.14))
# print(round(4.99))

# from math import * #  #include 같은거인듯
# print(floor(4.99))
# print(ceil(3.14))
# print(sqrt(16))

# from random import *

# print(random()) # 0.0~1.0
# print(random() * 10) # 0.0 ~ 10.0
# print(int(random() * 10))
# print(int(random() * 10 + 1)) #1 ~ 10
# print(randrange(1, 46)) # 1 ~ 45

# print(randint(1, 45)) #  1~45

# Quiz 1
# from random import *
# day = randint(4, 28)
# print("오프라인 스터디 모임 날짜는 매월 " + str(day) + "일로 선정되었습니다.")

# jumin = "940208-1234567"

# print("성별: " + jumin[7])
# print("연: " + jumin[0:2]) #0~1
# print("월: " + jumin[2:4])
# print("일: " + jumin[4:6])
# print("생년월일: " + jumin[:6]) #처음부터 6직전까지
# print("뒤 7자리: " + jumin[7:]) # 7부터 끝까지
# print("뒤 7자리: " + jumin[-7:]) # 맨뒤에서 7번째부터 끝까지

# python = "Python is Amazing"
# print(python.lower())
# print(python.upper())
# print(python[0].isupper())
# print(len(python))
# print(python.replace("Python", "Java"))

# idx = python.index("n")
# print(idx)
# idx = python.index("n", idx + 1)
# print(idx)
# print(python.find("Java")) # 없으면 -1
# print(python.index("Java")) # 없으면 에러

# print(python.count("n"))

# print("a", "b")
# print("나는 %d살입니다." %20)
# print("나는 %s을 좋아해요" % "파이썬")
# print("Apple은 %c로 시작해요." %"A")
# print("난 %s색과 %s색을 좋아해요." %("파린","빨간"))

# print("나는 {}살입니다.".format(20))
# print("나는 {}색과 {}색을 좋아해요." .format("파란", "빨간"))
# print("나는 {0}색과 {1}색을 좋아해요." .format("파란", "빨간"))
# print("나는 {1}색과 {0}색을 좋아해요." .format("파란", "빨간"))

# print("나는 {age}살이며, {color}색을 좋아해요." .format(age=20, color="빨간"))

# age = 20
# color = "빨간"
# print(f"나는 {age}살이며, {color}색을 좋아해요.")

# print("백문이 불여일견\n백견이 불여일타")
# print("저는 \"나도코딩\"입니다.")

# print("\\")
# print("Red Apple\rPine")

# print("Redd\bApple")

# print("Red\tApple")

# url = "https://42seoul.goorm.io/notice/1505"
# my_str = url.replace("https://","")
# my_str = my_str[:my_str.index(".")]
# count = my_str.count("e")
# password = my_str[:3] + str(len(my_str)) + str(count) + "1"
# print("{0}의 비밀번호는 {1}입니다" .format(url, password))

# 리스트

# sb1 = 10
# sb2 = 20
# sb3 = 30
# sb = [10, 20, 30]
# print(sb)

# sb = ["유재석", "조세호", "박명수"]
# print(sb.index("조세호"))

# sb.append("하하")
# print(sb)

# sb.insert(1, "정형돈")
# print(sb)

# print(sb.pop())
# print(sb)

# # print(sb.pop())
# # print(sb)

# print(sb.pop())
# print(sb)

# sb.append("유재석")
# print(sb.count("유재석"))

# num_list = [5,2,4,3,1]

# num_list.sort()
# print(num_list)

# num_list.reverse()
# print(num_list)

# num_list.clear()
# print(num_list)

# mix_list = ["조세호", 20, True]
# print(mix_list)

# num_list.extend(mix_list)
# print(num_list)

# cabinet = {3:"유재석", 100:"김태호"}
# print(cabinet[3], cabinet[100], cabinet.get(3), cabinet.get(5, "사용가능"), cabinet.get(5)) #cabinet[5] 는 에러뜸

# print(3 in cabinet) # True
# print(5 in cabinet) # False

# cab = {"A-3":"123", "B-100":"456"}
# print(cab["A-3"])
# print(cab["B-100"])

# cab["A-3"] = "김종국"
# print(cab)

# del cab["A-3"]
# print(cab)

# print(cab.keys())
# print(cab.values())
# print(cab.items())

# cab.clear()
# print(cab)


# 튜플


# menu = ("돈까스", "치즈까스")
# print(menu[0])
# print(menu[1])

# name = "김종국"
# age = 20
# hobby = "코딩"
# print(name, age, hobby)

# (name, age, hobby) = ("김종국", 20, "코딩")
# print(name, age, hobby)


# 집합(set)
# 중복 안됨, 순서 없음
# my_set = {1,2,3,3,3}
# print(my_set)

# java = {"우재석", "김태호", "양세형"}
# python = set(["유재석", "박명수"])

# # 교집합 (둘다 할 수 있는 개발자)
# print(java & python)
# print(java.intersection(python))

# # 합집합 (java 또는 python 할 수 있는 개발자)
# print(java | python)
# print(java.union(python))

# # 차집합 (java 할 수 있지만 python 할 수 없는 개발자)
# print(java - python)
# print(java.difference(python))

# # python 할 줄 아는 사랑 늘어남
# python.add("김태호")
# print(python)

# # 자바를 잊었어요
# java.remove("김태호")
# print(java)

# 자료구조의 변경
# 커피숍
# menu = {"커피", "우유", "주스"}
# print(menu, list(menu))
# print(menu, tuple(menu))
# print(menu, set(menu))
# from random import *
# lst = list(range(1,21)) # 1 ~ 20
# print(type(lst))
# print(lst)
# shuffle(lst)
# print(lst)
# winners = sample(lst, 4) # 1명은 치킨 3명은 커피
# print(" -- 당첨자 발표 -- ")
# print("치킨 당첨자 : {0}" .format(winners[0]))
# print("커피 당첨자 : {0}". format(winners[1:]))
# print(" -- 축하합니다 --")

# if
# weather = input("오늘 날씨는 어때요? ")
# if weather == "비" or weather == "눈":
#     print("우산을 챙기세요")
# elif weather == "미세먼지":
#     print("마스크를 챙기세요")
# else:
#     print("준비물 필요 없어요.")

# tmp = int(input("기온은 어때요? "))

# if tmp >= 30:
#     print("너무 더워요. 나가지 마세요")
# elif tmp >= 10 and tmp < 30:
#     print("괜찮은 날씨에요")
# elif 0 <=  tmp < 10:
#     print("외투를 챙기세요")
# else:
#     print("너무 추워요. 나가지 마세요")

# for

# print("대기번호: 1")
# print("대기번호: 2")
# print("대기번호: 3")
# print("대기번호: 4")
# print("대기번호: 5")

# for waiting_num in range(5): # 0,1,2,3,4
#     print("대기번호 : {0}".format(waiting_num))

# for waiting_num in range(1, 6): # 1,2,3,4,5
#     print("대기번호 : {0}".format(waiting_num))

# starbucks = ["아이언맨","토르","아이엠 그루트"]
# for customer in starbucks:
#     print("{0}, 커피가 준비되었습니다.".format(customer))

# while
# customer = "토르"
# index = 5
# while index >= 1:
#     print("{0}, 커피가 준비되었습니다. {1}번 남았어요.".format(customer, index))
#     index -= 1
#     if index == 0:
#         print("커피는 폐기처분되었습니다.")

# customer = "아이언맨"
# index = 1
# while True:
#     print("{0}, 커피가 준비 되었습니다. 호출 {1}회".format(customer, index))
#     index += 1

# customer = "토르"
# person = "Unknown"

# while person != customer:
#     print("{0}, 커피가 준비되었습니다.".format(customer))
#     person = input("이름이 어떻게 되세요? ")

# absent = [2, 5] # 결석
# no_book = [7] # 책 안갖고옴
# for student in range(1, 11): # 1 ~ 10
#     if student in absent:
#         continue
#     elif student in no_book:
#         print("오늘 수업 여기까지. {0}는 교무실로 따라와".format(student))
#         break
#     print("{0}, 책을 읽어봐".format(student))

# 한 줄  for문
# 출석번호가 1 2 3 4, 앞에 100을 붙이기로 함 -> 101, 102, 103, 104
# students = [1,2,3,4,5]
# print(students)
# students = [i+100 for i in students]
# print(students)

# # 학생이름을 길이로 변환
# students = ["Iron man", "Thor", "I am groot"]
# students = [len(i) for i in students]
# print(students)

# 학생이름을 대문자로 변환
# students = ["Iron man", "Thor", "I am groot"]
# students = [i.upper() for i in students]
# print(students)

# from random import *
# cnt = 0
# for i in range(1, 51):
#     time = randrange(5, 51)
#     if 5 <= time <= 15:
#         print("[0] {0}번째 손님(소요시간 : {1}분)".format(i, time))
#         cnt += 1
#     else:
#         print("[ ] {0}번째 손님(소요시간 : {1}분)".format(i, time))

# print("총 탑승 승객 : {0}분".format(cnt))

# def open_account():
#     print("새로운 계좌가 생성되었습니다.")

# def deposit(balance, money):
#     print("입금이 완료되었습니다. 잔액은 {0}원입니다.".format(balance+money))
#     return balance + money

# def withdraw(balance, money):
#     if balance >= money:
#         print("출급이 완료되었습니다. 잔액은 {0}원입니다.".format(balance - money))
#         return balance - money
#     else:
#         print("출급이 완료되지 않았습니다. 잔액은 {0}원입니다.".format(balance))
#         return balance

# def withdraw_night(balance, money):
#     commission = 100
#     return commission, balance - money - commission #튜플형식

# balance = 0
# balance = deposit(balance, 1000)
# balance = withdraw(balance, 2000)
# balance = withdraw(balance, 500)

# commission, balance = withdraw_night(balance, 500)
# print("수수로 {0}원이며, 잔액은 {1}원입니다.".format(commission, balance))

# def profile(name, age, main_lang):
#     print("이름 : {0}\t나이: {1}\t주 사용언어: {2}".format(name,age,main_lang))

# profile("유재석",20,"파이썬")
# profile("김태호", 25, "자바")

# def profile(name, age=17, main_lang="파이썬"):
#     print("이름 : {0}\t나이: {1}\t주 사용언어: {2}".format(name,age,main_lang))

# profile("김서규")
# profile("김민지")

# def profile(name, age=17, main_lang="파이썬"):
#     print("이름 : {0}\t나이: {1}\t주 사용언어: {2}".format(name,age,main_lang))

# profile(name="유재석",main_lang="파이썬", age=20)

# def profile(name, age, *language):
#     print("이름: {0} 나이: {1}".format(name,age), end=" ")
#     for lang in language:
#         print(lang, end = " ")
#     print()

# profile("유재석", 20, "파이썬", "자바", "C", "C++", "C#")
# profile("김태호", 25, "코틀린", "스위프트", "", "", "")

# gun = 10

# def checkpoint(soldiers):
#     global gun
#     gun = gun - soldiers
#     print("[함수 내] 남은 총: {0}".format(gun))

# def check_ret(gun, soldiers):
#     gun = gun - soldiers
#     print("[함수 내] 남은 총: {0}".format(gun))
#     return gun

# print("전체 총 : {0}".format(gun))
# checkpoint(2)
# print("남은 총 : {0}".format(gun))
# gun = check_ret(gun,2)
# print("남은 총 : {0}".format(gun))

# def std_weight(height, gender):
#     if gender == "남자":
#         std_w = round(pow(height,2) * 22, 2)
#         print("키 {0}cm 남자의 표준 체중은 {1}입니다.".format(round(height,2), std_w))
#     elif gender == "여자":
#         std_w = round(pow(height,2) * 22, 2)
#         print("키 {0}cm 여자의 표준 체중은 {1}입니다.".format(round(height,2), std_w))

# std_weight(1.80, "남자")
# std_weight(180 / 100, "남자")
# std_weight(1.65, "여자")

# print("파이썬", "자바", sep=",", end = "?")
# print("무엇이 더 재밌을까요?")

# import sys
# print("파이썬", "자바", file=sys.stdout)
# print("파이썬", "자바", file=sys.stderr)

# scores = {"수학":0, "영어":50, "코딩":100}
# for subject, score in scores.items():
#     # print(subject, score)
#     print(subject.ljust(8), str(score).rjust(4), sep=":")

# for num in range(1, 21):
#     print("대기번호 : " + str(num).zfill(3))

# answer = input("아무 값이나 입력하세요 : ")
# print(type(answer))
# print("입력하신 값은 "+ answer + "입니다.")