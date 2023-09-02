def defangIPaddr(address):
    return address.replace(".", "[.]")

# Example usage
address = "1.1.1.1"
result = defangIPaddr(address)
print(result)
