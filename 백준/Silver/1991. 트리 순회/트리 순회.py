class Node:
    def __init__(self, name):
        self.name = name
        self.left = None
        self.right = None

def preorder(node):
    if node is not None:
        print(node.name, end="")
        preorder(node.left)
        preorder(node.right)

def inorder(node):
    if node is not None:
        inorder(node.left)
        print(node.name, end="")
        inorder(node.right)

def postorder(node):
    if node is not None:
        postorder(node.left)
        postorder(node.right)
        print(node.name, end="")

# Input
import sys
input = sys.stdin.read
data = input().split()

N = int(data[0])
nodes = {chr(ord('A') + i): Node(chr(ord('A') + i)) for i in range(N)}

index = 1
for _ in range(N):
    root_name = data[index]
    left_name = data[index + 1]
    right_name = data[index + 2]
    
    if left_name != '.':
        nodes[root_name].left = nodes[left_name]
    if right_name != '.':
        nodes[root_name].right = nodes[right_name]
    
    index += 3

# Preorder traversal
preorder(nodes['A'])
print()

# Inorder traversal
inorder(nodes['A'])
print()

# Postorder traversal
postorder(nodes['A'])
