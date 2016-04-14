/*
 * StockMarket.h
 *
 *  Created on: 14-Apr-2016
 *      Author: dipanjan
 */

#ifndef STOCKMARKET_H_
#define STOCKMARKET_H_

#include <iostream>
#include <Wt/WApplication>
#include <Wt/WBreak>
#include <Wt/WContainerWidget>
#include <Wt/WLineEdit>
#include <Wt/WPushButton>
#include <Wt/WText>


class StockMarket :
		public Wt::WApplication {

public:
	void try_logIn();
	void greet();
	StockMarket(const Wt::WEnvironment&);
	~StockMarket();
};

/* namespace IOTPApp */

#endif /* STOCKMARKET_H_ */
