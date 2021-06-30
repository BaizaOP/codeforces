# Explaination

## CORE FORMULA

>ANSWER(x) = 10(NUMBER - 1) + sum of n from 1 to SIZE

## Vars used

>x = the given number
>
>SIZE = number of digits in x
>
>NUMBER = the number repeated in the digits in x

## Ex. ANSWER(33)

### Vars

>x = 33
>
>SIZE = 2
>
>NUMBER = 3

### Work through

>Formula again: ANSWER(x) = 10(NUMBER - 1) + sum of n from 1 to SIZE
>
>ANSWER(33) = 10(3 - 1) + sum of n from 1 to 2  
>
>ANSWER(33) =  10(2) + (1 + 2)  
>
>ANSWER(33) = 20 + 3  
>
>ANSWER(33) = 23

## Check

> (1 + 2 + 3 + 4) + (1 + 2 + 3 + 4) + 1 + 2
>
> (10) + (10) + 3
>
> 23

explaination of above: sum  of num of digits in: 1, 11, 111, 1111, 2, 22, 222, 2222, 3, 33

## Proof

> Given a number n, you can formulate the size and number in two ways
>
> SIZE: keep dividing it by 10 until its less than zero. Ex. **11**, you can divde 10 into it twice, so there is a size of 2.
>
> NUMBER: You can use the number modulus 10 to get the number. Ex **333**, 333 % (modulus) 10 = 3. (Where modulus captures the remiander of the division)
>
>In order to formulate, well, a formula, notice the pattern. For a number such as **22** we have to take the sum of the amount of digits that include 1 plus the amount of 2s up to **22**. So, 1, 11, 111, 1111, have 1, 2, 3, and 4 digits respectfully, and add the digits in 2, and 22, 1 and 2 respectfully. 1 + 2 + 3 + 4 + 1 + 2 can be ordered like (1+2+3+4) + (1+2) to equal 13.  
>
>If we take another number like 55, we have to sum all of the digits with the numbers 1, 2, 3, 4, and then 5 and 55. So that would be (1+2+3+4) + (1+2+3+4) ... (1 + 2). (1+2+3+4) = 10, and for any number, you have to sum all of the digits with the digit before it, for **55** you would have to sum all of the digits in the numbers before 5, so add 10 for 1, 10 for 2, 10 for 3, and 10 for 4. Or 4 * 10. Then just add the sum of the digits with the current digit, so 1 for 5 and 2 for 55. 4(10) + (1+2) where 4 comes from 5-1. So the formula: ***10(n-1) + the sum of the digits from the NUMBER to the given number***, given these are lazy numbers.
