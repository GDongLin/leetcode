cmake_minimum_required(VERSION 3.8)
project(leetcode)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES source/AddTwoNumbers_2.cpp source/ListNode.cpp ListNode.h source/TwoSum_1.cpp source/LongestSubstringWithoutRepeatingCharacters_3.cpp source/RemoveElement.cpp source/RemoveDuplicatesFromSortedList.cpp source/RemoveDuplicatesFromSortedArray.cpp source/RemoveDuplicatesFromSortedArrayII.cpp source/ReverseLinkedList.cpp source/ReverseLinkedListII.cpp source/IntersectionOfTwoLinkedLists.cpp source/LinkedListCycle.cpp source/LinkedListCycleII.cpp source/PartitionList.cpp source/ListNode.cpp source/ListNode.h source/CopyListWithRandomPointer.cpp source/MergeTwoSortedLists.cpp)
add_executable(leetcode ${SOURCE_FILES})