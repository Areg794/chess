#include<iostream>
#include<string>
class Chess {
protected:
	std::string colour;
	std::string name;
public: 
	virtual void movement(const std::string& colour,const std::string& name) = 0;
	virtual ~Chess() {
	}
};
class Pawn : public Chess {
public:
	void movement (const std::string& colour, const std::string& name) override {
		if (colour == "black") {
			std::cout << "black"<< name <<  "move" << std::endl;
		}
		else if (colour == "white") {
			std::cout << "white pawn move " << std::endl;
		}
		else {
			std::cout << "Please enter black or white";
		}
	}
	~Pawn()final{}
};
class Rook :public Chess {
public:
	void movement(const std::string& colour, const std::string& name) override {
		if (colour == "black") {
			std::cout << "black rooks move " << std::endl;
		}
		else if (colour == "white") {
			std::cout << "white rooks move " << std::endl;
		}
		else{
			std::cout << "Please enter black or white";
		}
	}
	~Rook()final{}
};
class Bishop : public Chess {
public:
	void movement(const std::string& colour, const std::string& name)override {
		if (colour == "black"){
			std::cout << " black bishops move " << std::endl;
	}
	else if (colour == "white") {
		std::cout << "white bishops move " << std::endl;

		}
	else {
			std::cout << "Please enter black or white";
		}
}
	~Bishop()final {}
};
class Knight :public Chess {
public:
	void movement(const std::string& colour, const std::string& name)override {
		if (colour == "black") {
			std::cout << "black knight move " << std::endl;
		}
		else if (colour == "white") {
			std::cout << "white knight move " << std::endl;

		}
		else {
			std::cout << "Please enter black or white";
		}
	}
	~Knight()final {}
};
class Queen :public Chess {
public:
	void movement(const std::string& colour, const std::string& name)override {
		if (colour == "black") {
			std::cout << "black queen move " << std::endl;
		}
		if (colour == "white") {
			std::cout << "white queen move " << std::endl;
		}
		else {
			std::cout << "Please enter black or white";
		}
	}
	~Queen()final {}
};
class King : public Chess {
public:
	void movement(const std::string& colour, const std::string& name)override {
		if (colour == "black") {
			std::cout << "black king move " << std::endl;
		}
		else if (colour == "white") {
			std::cout << "white king move " << std::endl;
		}
		else {
			std::cout << "Please enter black or white";
		}
	}
	~King()final {}
};
	int main() {
	std::string colour;
	std::cout << "please enter a colour " << std::endl;
	std::cin >> colour;
	Chess* pawn = new Pawn;
	Chess* king = new King;
	Chess* queen = new Queen;
	Chess* knight = new Knight;
	Chess* bishop = new Bishop;
	Chess* rook = new Rook;
	king->movement(colour,"king");
	std::cout << "please enter a colour " << std::endl;
	std::cin >> colour;
	pawn->movement(colour,"pawn");
	std::cout << "please enter a colour " << std::endl;
	std::cin >> colour;
	queen->movement(colour,"queen");
	std::cout << "please enter a colour " << std::endl;
	std::cin >> colour;
	knight->movement(colour,"knight");
	std::cout << "please enter a colour " << std::endl;
	std::cin >> colour;
	bishop->movement(colour,"bishop");
	std::cout << "please enter a colour " << std::endl;
	std::cin >> colour;
	rook->movement(colour,"rook");
	delete pawn;
	delete king;
	delete queen;
	delete knight;
	delete bishop;
	delete rook;
	return 0;
}
