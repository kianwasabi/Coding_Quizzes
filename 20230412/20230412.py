class MyClass:
    def __init__(self, *args):
        self.list = list(args)
    def __str__(self) -> str:
        s = "Output: "
        for entry in self.list:
            s += str(entry)+" "
        return s

def get_nested_value(nested_dict, keys, default_value="key not present"):
    """
    :param nested_dict: A nested dictionary object.
    :param keys: A list of dict keys that displays the path to the demanded value in the dictionary.
    :param default_value: The default value is returned if a key is not in the dictionary.
    :return: The value that corresponds to the key path in the dictionary or the default value if the key can not be found.
    """
    
    current_dict = nested_dict
    for key in keys:
        if key not in current_dict:
            return default_value
        current_dict = current_dict[key]
    return current_dict

def main():
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

    # test case 0: Keys that exist in the nested dict.
    # Output: Hello, this is a nested dict !
    keys_list = [
        ['1','11'],
        ['1','13','131'],
        ['1','13','132','1321'],
        ['1','13','132','1323'],
        ['3','31'],
        ['3','33'],
        ['4']
        ]
    
    # test case 1: first level key + key that is not present + key that is present
    # Output: {'31': 'nested', '32': 42, '33': 'dict'} key not present 42
    # keys_list = [
    #     ['3'],
    #     ['1','11','111'],
    #     ['2']
    #     ]

    # test case 2: entire nested dict
    # Output: see nested_dict
    keys_list = [
        []
        ]

    my_list = []
    for keys in keys_list:
        sub_result = get_nested_value(nested_dict=nested_dict, keys=keys)
        my_list.append(sub_result)

    #Create an object with a list of varying length.
    #This can be done by define the class constructor using
    #the __init__ method and pass a variable number of
    #arguments to it using the *args syntax.
    my_object = MyClass(*my_list)
    print(str(my_object))

if __name__== "__main__":
    main()