/*
 * TransectionWidget.h
 *
 *  Created on: 14-Apr-2016
 *      Author: dipanjan
 */

#ifndef TRANSECTIONWIDGET_H_
#define TRANSECTIONWIDGET_H_

#include <Wt/WContainerWidget>

struct TransectionItem{
	std::string scrip_name;
	int quantity;
	double price;
	
};


class TransectionWidget: public Wt::WContainerWidget {
public:
	TransectionWidget(WContainerWidget *, std::vector<TransectionItem>);
	virtual ~TransectionWidget();
};

/* namespace IOTPApp */

#endif /* TRANSECTIONWIDGET_H_ */
