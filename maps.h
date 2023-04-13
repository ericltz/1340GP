#pragma once

#include <string>
#include <vector>
#include "map.h"
#include "format.h"



void init_chuntian_path(Map &map);
void init_chuntian_town(Map &map);
void init_Fairy_society_center(Map &map);
void init_grassland(Map &map);
void init_hill(Map &map);
void init_home(Map &map);
void init_market(Map &map);
void init_qiushui_town(Map &map);
void init_riverside(Map &map);

// TODO add interaction to maps



const vector<string> chuntian_path = {
    "####################################################################",
    "#         ……*……*……*……*……*……*…………*……         *……*……*……*……*……*……*……  #",
    "#         ^^^^^                               ^^^^^                #",
    "#   ·~~·~~·~~·~~·~~·                        ·~~·~~·~~·~~·~~·       #",
    "####################################################################",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "====                                                            ====",
    "                                                                    ",
    "                                                                    ",
    "====                                        OCCCCCCO            ====",
    "#                                           O  XZ  O               #",
    "#                                           OOOOOOOO               #",
    "#                                                                  #",
    "####################################################################",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "####################################################################",
};

const vector<string> chuntian_path_vaild = {
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "00001111111111111111111111111111111111111111111111111111111111110000",
    "11111111111111111111111111111111111111111111111111111111111111111111",
    "11111111111111111111111111111111111111111111ZZZZZZZZ1111111111111111",
    "00001111111111111111111111111111111111111111000000001111111111110000",
    "01111111111111111111111111111111111111111111000000001111111111111110",
    "01111111111111111111111111111111111111111111000000001111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "00000000000000000000000000000000000000000000000000000000000000000000",
};

const map<char, string> chuntian_path_interact = {

};

// const Map chuntian_path_map(chuntian_path, chuntian_path_vaild, chuntian_path_interact);


const vector<string> chuntian_town = {
    "<format front=green >####################################################################</format>",
    "<format front=green >#</format>                                                                  <format front=green >#</format>",
    "<format front=green >#</format>                            ########             ########         <format front=green >#</format>",
    "<format front=green >#</format>                            #      #             #      #         <format front=green >#</format>",
    "<format front=green >#</format>                            ########             #Market#         <format front=green >#</format>",
    "<format front=green >#</format>         ########                                #      #         <format front=green >#</format>",
    "<format front=green >#</format>         # Home #                                ###--###         <format front=green >#</format>",
    "<format front=green >#</format>         ###--###                                                 <format front=green >#</format>",
    "====                   #########################                ====",
    "                       #                       #                    ",
    "                       #      Fairy            #                    ",
    "====                   #        Society        #                ====",
    "<format front=green >#</format>                      #           Center      #                   <format front=green >#</format>",
    "<format front=green >#</format>                      #                       #                   <format front=green >#</format>",
    "<format front=green >#</format>                      #########------##########                   <format front=green >#</format>",
    "<format front=green >#</format>      ########                                    ########        <format front=green >#</format>",
    "<format front=green >#</format>      #      #                                    #      #        <format front=green >#</format>",
    "<format front=green >#</format>      ########                                    ########        <format front=green >#</format>",
    "<format front=green >#</format>                                                                  <format front=green >#</format>",
    "<format front=green >####################################################################</format>",
};

const vector<string> chuntian_town_vaild = {
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111000000001111111111111000000001111111110",
    "01111111111111111111111111111000000001111111111111000000001111111110",
    "01111111111111111111111111111000000001111111111111000000001111111110",
    "01111111110000000011111111111111111111111111111111000000001111111110",
    "01111111110000000011111111111111111111111111111111000000001111111110",
    "01111111110000000011111111111111111111111111111111111MM1111111111110",
    "0000111111111HH11111111000000000000000000000000011111111111111110000",
    "11111111111111111111111000000000000000000000000011111111111111111111",
    "11111111111111111111111000000000000000000000000011111111111111111111",
    "00001111111111111111111000000000000000000000000011111111111111110000",
    "01111111111111111111111000000000000000000000000011111111111111111110",
    "01111111111111111111111000000000000000000000000011111111111111111110",
    "01111111111111111111111000000000000000000000000011111111111111111110",
    "01111110000000011111111111111111FFFFFF111111111111100000000111111110",
    "01111110000000011111111111111111111111111111111111100000000111111110",
    "01111110000000011111111111111111111111111111111111100000000111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "00000000000000000000000000000000000000000000000000000000000000000000",
};

const map<char, string> chuntian_town_interact = {
    {'M', "market"},
    {'F', "Fairy_society_center 33 18"},
    {'H', "home"},
};

// const Map chuntian_town_map(chuntian_town, chuntian_town_vaild, chuntian_town_interact);

const vector<string> Fairy_society_center = {
    "####################################################################",
    "#                     \\                    /                       #",
    "#                      \\  Recovery center /                        #",
    "#                       \\_______  _______/                         #",
    "#                                             OOOOOOOOOO           #",
    "#                                            C          O          #",
    "#                                            C  DOCTOR  O          #",
    "#                                            C          O          #",
    "#                                             OOOOOOOOOO           #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                        |             |                           #",
    "#                        |             |                           #",
    "#########################|             |############################",
};

const vector<string> Fairy_society_center_vaild = {
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "01111111111111111111100000000000000000000001111111111111111111111110",
    "01111111111111111111110000000000000000000011111111111111111111111110",
    "01111111111111111111111000000000000000000111111111111111111111111110",
    "0111111111111111111111111111111RR11111111111110000000000111111111110",
    "01111111110000000011111111111111111111111111D00000000000011111111110",
    "01111111110000000011111111111111111111111111D00000000000011111111110",
    "01111111110000000011111111111111111111111111D00000000000011111111110",
    "0111111111111HH11111111111111111111111111111110000000000111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111110111111111111101111111111111111111111111110",
    "01111111111111111111111110111111111111101111111111111111111111111110",
    "00000000000000000000000000111111111111100000000000000000000000000000",
};

const map<char, string> Fairy_society_center_interact = {
    {'D', "doctor"},
    {'R', "recovery_center"},
};

// const Map Fairy_society_center_map(Fairy_society_center, Fairy_society_center_vaild, Fairy_society_center_interact);



const vector<string> grassland = {
    "####################################################################",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "# OOOOOOO                                                          #",
    "# O  B  C                                                       ====",
    "# OOOOOOO                                                            ",
    "#                                                                    ",
    "#                                                               ====",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                         OCCCCCO                                  #",
    "#                         O  C  O                                  #",
    "#                         OOOOOOO                                  #",
    "#                                                                  #",
    "####################################################################",
};

const vector<string> grassland_vaild = {
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01000000011111111111111111111111111111111111111111111111111111111110",
    "010000000B1111111111111111111111111111111111111111111111111111111110",
    "01000000011111111111111111111111111111111111111111111111111111110000",
    "01111111111111111111111111111111111111111111111111111111111111111111",
    "01111111111111111111111111111111111111111111111111111111111111111111",
    "01111111111111111111111111111111111111111111111111111111111111110000",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "011111111111111111111111111CCCCC111111111111111111111111111111111110",
    "01111111111111111111111111000000011111111111111111111111111111111110",
    "01111111111111111111111111000000011111111111111111111111111111111110",
    "01111111111111111111111111000000011111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "00000000000000000000000000000000000000000000000000000000000000000000",
};

const map<char, string> grassland_interact = {

};

// const Map grassland_map(grassland, grassland_vaild, grassland_interact);

const vector<string> hill = {
    "########################|                  |########################",
    "#                       |                  |                       #",
    "#                       |                  |                       #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                          OCCCCCCCCCCCCCCCO       #",
    "#                                          O    D D D      O       #",
    "#                                          O    D     D    O       #",
    "#                                          O    D     D    O       #",
    "#                                          O    D D D      O       #",
    "#                                          OOOOOOOOOOOOOOOOO       #",
    "#                                                                  #",
    "####################################################################",
};

const vector<string> hill_vaild = {
    "00000000000000000000000001111111111111111110000000000000000000000000",
    "01111111111111111111111101111111111111111110111111111111111111111110",
    "01111111111111111111111101111111111111111110111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111DDDDDDDDDDDDDDD111111110",
    "01111111111111111111111111111111111111111110000000000000000011111110",
    "01111111111111111111111111111111111111111110000000000000000011111110",
    "01111111111111111111111111111111111111111110000000000000000011111110",
    "01111111111111111111111111111111111111111110000000000000000011111110",
    "01111111111111111111111111111111111111111110000000000000000011111110",
    "01111111111111111111111111111111111111111110000000000000000011111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "00000000000000000000000000000000000000000000000000000000000000000000",
};

const map<char, string> hill_interact = {

};

// const Map hill_map(hill, hill_vaild, hill_interact);



const vector<string> home = {
    "####################################################################",
    "#                                                                  #",
    "#                                                                  #",
    "#       OOOOOOOOO                                                  #",
    "#      O         C                                                 #",
    "#      O   MOM   C                                                 #",
    "#      O         C                                                 #",
    "#       OOOOOOOOO                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                        |             |                           #",
    "#                        |             |                           #",
    "#########################|             |############################",
};

const vector<string> home_vaild = {
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111000000000111111111111111111111111111111111111111111111111110",
    "011111100000000000M1111111111111111111111111111111111111111111111110",
    "011111100000000000M1111111111111111111111111111111111111111111111110",
    "011111100000000000M1111111111111111111111111111111111111111111111110",
    "01111111000000000111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111110111111111111101111111111111111111111111110",
    "01111111111111111111111110111111111111101111111111111111111111111110",
    "00000000000000000000000000111111111111100000000000000000000000000000",
};

const map<char, string> home_interact = {

};

// const Map home_map(home, home_vaild, home_interact);

const vector<string> market = {
    "####################################################################",
    "#                    |                        |                    #",
    "#                    |        Purchase        |                    #",
    "#                    |         Center         |                    #",
    "#                    |                        |                    #",
    "#                    |__________PPPP__________|                    #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                        |                |                        #",
    "#                        |                |                        #",
    "#########################|                |#########################",
};

const vector<string> market_vaild = {
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "01111111111111111111100000000000000000000000000111111111111111111110",
    "01111111111111111111100000000000000000000000000111111111111111111110",
    "01111111111111111111100000000000000000000000000111111111111111111110",
    "01111111111111111111100000000000000000000000000111111111111111111110",
    "01111111111111111111100000000000000000000000000111111111111111111110",
    "01111111111111111111111111111111BBBB11111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111110111111111111111101111111111111111111111110",
    "01111111111111111111111110111111111111111101111111111111111111111110",
    "00000000000000000000000000111111111111111100000000000000000000000000",
};

const map<char, string> market_interact = {

};

// const Map market_map(market, market_vaild, market_interact);



const vector<string> qiushui_town = {
    "####################################################################",
    "#                                                                  #",
    "#        ########                                 ########         #",
    "#        #      #                                 #      #         #",
    "#        ###--###                                 #Market#         #",
    "#                                                 #      #         #",
    "#                                                 ###--###         #",
    "#                                                                  #",
    "====                   #########################                   #",
    "                       #                       #                   #",
    "                       #      Fairy            #                   #",
    "====                   #        Society        #    ########       #",
    "#                      #           Center      #    #      #       #",
    "#                      #                       #    ########       #",
    "#                      #########------##########                   #",
    "#      ########                                                    #",
    "#      #      #                                                    #",
    "#      ########                                                    #",
    "#                                                                  #",
    "####################################################################",
};

const vector<string> qiushui_town_vaild = {
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111100000000111111111111111111111111111111111000000001111111110",
    "01111111100000000111111111111111111111111111111111000000001111111110",
    "01111111100000000111111111111111111111111111111111000000001111111110",
    "01111111111111111111111111111111111111111111111111000000001111111110",
    "01111111111111111111111111111111111111111111111111000000001111111110",
    "01111111111111111111111111111111111111111111111111111MM1111111111110",
    "00001111111111111111111000000000000000000000000011111111111111111110",
    "11111111111111111111111000000000000000000000000011111111111111111110",
    "11111111111111111111111000000000000000000000000011111111111111111110",
    "00001111111111111111111000000000000000000000000011110000000011111110",
    "01111111111111111111111000000000000000000000000011110000000011111110",
    "01111111111111111111111000000000000000000000000011110000000011111110",
    "01111111111111111111111000000000000000000000000011111111111111111110",
    "01111110000000011111111111111111FFFFFF111111111111111111111111111110",
    "01111110000000011111111111111111111111111111111111111111111111111110",
    "01111110000000011111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "00000000000000000000000000000000000000000000000000000000000000000000",
};

const map<char, string> qiushui_town_interact = {

};

// const Map qiushui_town_map(qiushui_town, qiushui_town_vaild, qiushui_town_interact);

const vector<string> riverside = {
    "####################################################################",
    "#~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ #",
    "# ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~#",
    "#~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ #",
    "# ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~#",
    "#~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "#                                                                  #",
    "====                                                            ====",
    "                                                                    ",
    "                                                                    ",
    "====                                                            ====",
    "#                                           OCCCCCO                #",
    "#                                           O  A  O                #",
    "#                                           OOOOOOO                #",
    "#                                                                  #",
    "####################################################################",
};

const vector<string> riverside_vaild = {
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "00000000000000000000000000000000000000000000000000000000000000000000",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "00001111111111111111111111111111111111111111111111111111111111110000",
    "11111111111111111111111111111111111111111111111111111111111111111111",
    "11111111111111111111111111111111111111111111111111111111111111111111",
    "000011111111111111111111111111111111111111111AAAAA111111111111110000",
    "01111111111111111111111111111111111111111111000000011111111111111110",
    "01111111111111111111111111111111111111111111000000011111111111111110",
    "01111111111111111111111111111111111111111111000000011111111111111110",
    "01111111111111111111111111111111111111111111111111111111111111111110",
    "00000000000000000000000000000000000000000000000000000000000000000000",
};

const map<char, string> riverside_interact = {

};

// const Map riverside_map(riverside, riverside_vaild, riverside_interact);

void init_maps(map<string, Map> &maps);
// const map<string, Map> maps_map = {
//     {"chuntian_path", chuntian_path_map},
//     {"chuntian_town", chuntian_town_map},
//     {"Fairy_society_center", Fairy_society_center_map},
//     {"grassland", grassland_map},
//     {"hill", hill_map},
//     {"home", home_map},
//     {"market", market_map},
//     {"qiushui_town", qiushui_town_map},
//     {"riverside", riverside_map},
// };