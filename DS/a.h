#pragma once

class node{};

void insertAtHead(node * &head, int val);

void insertAtTale(node * &head, int val);

void display(node * head);

bool searchList(node * head, int key);

void deleteNode(node * &head, int val);