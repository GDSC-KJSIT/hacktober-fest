def word_rev(words: str) -> str:
    """This function reverses the words in a string"""
    rev_word_list = words.split()[::-1]  # Split the string into a list of words and reverse the list
    # Join the list of words into a string and return it
    return " ".join(rev_word_list)


print(word_rev(str(input("Enter a sentence: "))))
