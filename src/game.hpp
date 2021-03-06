//Copyright 2020 KonstantIMP
//
//Licensed under the Apache License, Version 2.0 (the "License");
//you may not use this file except in compliance with the License.
//You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//Unless required by applicable law or agreed to in writing, software
//distributed under the License is distributed on an "AS IS" BASIS,
//WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//See the License for the specific language governing permissions and
//limitations under the License.

#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "snake.hpp"

class Game {
public:
    Game();
    ~Game();

    void Run();

private:
    sf::RenderWindow *main_win;

    sf::Texture earth;

    sf::Texture background;

    sf::Event mw_event;

    sf::Font dejavu;

    sf::Clock frame_ptr;

    sf::Clock timer;

    sf::Music mw_music;

    Snake mw_game;

    float speed;
};

#endif // GAME_HPP
