//
// Created by mateu on 02.02.2022.
//

#ifndef BACKPACK_MENU_H
#define BACKPACK_MENU_H

#include <iostream>

using namespace std;

#endif

/**
 * Enums for x_menu
 */
enum start_menu {
    create_backpack = 1,
    close_program
};

enum main_menu {
    push_node = 1,
    push_item,
    plus_node,
    plus_item,
    add_random,
    pop,
    delete_head,
    delete_item,
    print_all,
    print_one,
    print_enum,
    print_size,
    clean,
    change_max,
    exit_with_saving,
    exit_without_saving
};

#define MENU_START_MIN 1
#define MENU_START_MAX close_program
#define MENU_MAIN_MIN 1
#define MENU_MAIN_MAX exit_without_saving

/**
 * @brief menu if there is no input file
 */
void menu_start();

/**
 * @brief displays main menu
 */
void menu_main();


/**
 * @brief force user to input correct number
 * @param f menu to print
 * @param min minimum acceptable int
 * @param max maximum acceptable int
 * @return given value as int
 */
int menu_loop(void (*f)(), int const min, int const max);
