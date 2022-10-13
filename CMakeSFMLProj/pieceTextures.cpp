/*
    This code file contains static member initialisations
    of pieceTextures.h
*/

#include "pieceTextures.h"

sf::Texture PieceTextures::loadTexture(std::string str){
    std::cout << system("dir");
    sf::Texture tmp;
    if (!tmp.loadFromFile(str))
        std::cout << "Error loading file\n";
    return tmp;
}
std::string path = "D:/projcpp/CMakeSFMLProj/CMakeSFMLProj/";
sf::Texture PieceTextures::blackKing = PieceTextures::loadTexture(path + "Textures/b_king.png");
sf::Texture PieceTextures::blackQueen = PieceTextures::loadTexture(path + "Textures/b_queen.png");
sf::Texture PieceTextures::blackRook = PieceTextures::loadTexture(path + "Textures/b_rook.png");
sf::Texture PieceTextures::blackKnight = PieceTextures::loadTexture(path + "Textures/b_knight.png");
sf::Texture PieceTextures::blackBishop = PieceTextures::loadTexture(path + "Textures/b_bishop.png");
sf::Texture PieceTextures::blackPawn = PieceTextures::loadTexture(path + "Textures/b_pawn.png");

sf::Texture PieceTextures::whiteKing = PieceTextures::loadTexture(path + "Textures/w_king.png");
sf::Texture PieceTextures::whiteQueen = PieceTextures::loadTexture(path + "Textures/w_queen.png");
sf::Texture PieceTextures::whiteRook = PieceTextures::loadTexture(path + "Textures/w_rook.png");
sf::Texture PieceTextures::whiteKnight = PieceTextures::loadTexture(path + "Textures/w_knight.png");
sf::Texture PieceTextures::whiteBishop = PieceTextures::loadTexture(path + "Textures/w_bishop.png");
sf::Texture PieceTextures::whitePawn = PieceTextures::loadTexture(path + "Textures/w_pawn.png");
