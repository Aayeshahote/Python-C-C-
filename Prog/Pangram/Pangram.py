def is_pangram(sentence):
    alphabet = set('abcdefghijklmnopqrstuvwxyz')
    sentence = sentence.lower()

    for char in sentence:
        if char in alphabet:
            alphabet.remove(char)
        if not alphabet:
            return True

    return False

# Test cases
sentence1 = "thequickbrownfoxjumpsoverthelazydog"
print(is_pangram(sentence1))  # Output: True

sentence2 = "dbatu"
print(is_pangram(sentence2))  # Output: False
