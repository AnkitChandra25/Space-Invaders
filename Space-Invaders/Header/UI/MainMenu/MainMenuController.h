#pragma once
#include <SFML/Graphics.hpp>

namespace UI
{
	namespace MainMenu
	{
		class MainMenuUIController
		{
		private:

			sf::RenderWindow* game_window;

<<<<<<< HEAD
			// Textures:
			sf::Texture background_texture;
			sf::Sprite background_sprite;

			sf::Texture play_button_texture;
			sf::Sprite play_button_sprite;

			sf::Texture instructions_button_texture;
			sf::Sprite instructions_button_sprite;

			sf::Texture quit_button_texture;
			sf::Sprite quit_button_sprite;

			// Since this is a single image, we can check if it loaded or not during initialization
			void initializeBackgroundImage();
			void scaleBackgroundImage();

			// however, we have 3 buttons so it's better to create a seperate function to check if they are loaded
			void initializeButtons();
			bool loadButtonTexturesFromFile();
			void setButtonSprites();

			void scaleAllButttons();
			void scaleButton(sf::Sprite* button_to_scale);
			void positionButtons();

			void processButtonInteractions();
			bool clickedButton(sf::Sprite*, sf::Vector2f);

=======
>>>>>>> parent of a30892c (Implement Main Menu Sprites)
		public:
			MainMenuUIController();

			void initialize();
			void update();
			void render();

		};
	}
}