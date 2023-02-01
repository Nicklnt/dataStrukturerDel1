class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

    def __str__(self):
        return str(self.data)

        """ Return a string representation of the data """


class Storage:
    def __init__(self):
        """ Creates an empty Storage class. Sets head to None. """
        self.head = None

    def push(self, data):
        newNode = Node(data)

        if self.head == None:

            self.head = newNode
            newNode.next = None
        else:
            newNode.next = self.head
            self.head = newNode

        return newNode
        """ Create a Node to hold the data, then put it at the head of the list. """

    def pop(self):
        if self.head != None:
            current = self.head
            self.head = current.next
            data = current.data
            current = None
            return data
        else:
            print("the list is empty")
        

        """ Remove the head Node and return its data. """

    def peek(self):
        return self.head.data
        """ Return the data from the head Node, without removing it. """

    def isempty(self):
        if self.head == None:

            print("List is empty")
            return 1
        else:
            return 0
        """ Return True if the list is empty, otherwise False """

    def swap(self, position1, position2):
        current = self.head
        counter = 0
        while current != None:
            counter += 1
            if counter == position1:
                pPosition1 = current
                
            if counter == position2:
                pPosition2 = current
               

                temp = pPosition1.data
                pPosition1.data = pPosition2.data
                pPosition2.data = temp

           
            current= current.next

            
