# CodingQuizzes

My repository for coding quizzes that I post on social media like linkedin.
A code snippet a day keeps the bordome away. :)

## Idea:
Every once in while, whenever I find something interesting/inspiring that cound be used to challenge basic coding skills, I will collect these ideas and publish a little coding quiz.

## Concept: 
Abstract quiz questions from actual coding situation & Try to solve this question in python & C.
BUT, try is by your own. 
Do not use ChatGTP:)

## Quizzes:
|2022/12/17|
Q: Swap two numbers (e.g. a=3 and b=5) without a third variable. 

|2022/12/20|
Q: How to find out if given two strings (e.g. "Happy Birthday Brian" & "B RaIN day th Happy Bir ") are anagrams or not?

|2023/04/13|
Q: How to access a value in a nested dict of different depths with a list containing lists of keys. If a key does not exist, a default value should be returned. If the key being accessed contains another dict, that dict should be returned.

Use the following nested dict: 
<pre>
<code>
    nested_dict = {
        "1": {
            "11": "Hello,",
            "12": 42,
            "13": {
                    "131": "this",
                    "132": {
                            "1321": "is",
                            "1322": 42,
                            "1323": "a"
                            }
                }
            },
        "2": 42,
        "3": {
            "31": "nested",
            "32": 42,
            "33": "dict",
            },
        "4": "!"
    }
</pre>
</code>    
Try using the following key list to access the values in the nested dict.
    keys_list = [
        ['1','11'],
        ['1','13','131'],
        ['1','13','132','1321'],
        ['1','13','132','1323'],
        ['3','31'],
        ['3','33'],
        ['4']
        ]
Output: Hello, this is a nested dict !

Furthermore, the following key lists can be used to test your code: 
test case 1: first level key + key that is not present + key that is present
    keys_list = [
        ['3'],
        ['1','11','111'],
        ['2']
        ]
Output: {'31': 'nested', '32': 42, '33': 'dict'} key not present 42

    test case 2: entire nested dict
    keys_list = [
        []
        ]
Output: {'1': {'11': 'Hello,', '12': 42, '13': {'131': 'this', '132': {'1321': 'is', '1322': 42, '1323': 'a'}}}, '2': 42, '3': {'31': 'nested', '32': 42, '33': 'dict'}, '4': '!'} 
