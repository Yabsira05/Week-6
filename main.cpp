#include <iostream>
#include <string>
using namespace std;

struct Item {
    string name;
    int id;
};

void fillInventory(Item* inventory, int size) {
    for (int i = 0; i < size; i++) {
        inventory[i].id = i + 1;
        inventory[i].name = "Item " + to_string(i + 1);
    }
}

int binarySearchById(Item* inventory, int size, int targetId) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (inventory[mid].id == targetId) {
            return mid;
        } else if (targetId < inventory[mid].id) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    const int SIZE = 100;
    Item* inventory = new Item[SIZE];
    fillInventory(inventory, SIZE);
    int searchId;
    cout << "Enter an ID to search for (1 - " << SIZE << "): ";
    cin >> searchId;
    int index = binarySearchById(inventory, SIZE, searchId);
    if (index != -1) {
        cout << "Item found:\n";
        cout << "Index: " << index << endl;
        cout << "Name: " << inventory[index].name << endl;
        cout << "ID: " << inventory[index].id << endl;
    } else {
        cout << "Item with ID " << searchId << " not found.\n";
    }
    delete[] inventory;
    return 0;
}
/* Enter an ID to search for (1 - 100): 60
 Item found:
 Index: 59
 Name: Item 60
 ID: 60
 Program ended with exit code: 0 */
