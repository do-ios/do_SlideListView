//
//  do_SlideSlideListView_View.h
//  DoExt_UI
//
//  Created by @userName on @time.
//  Copyright (c) 2015年 DoExt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "do_SlideListView_IView.h"
#import "do_SlideListView_UIModel.h"
#import "doIUIModuleView.h"

@interface do_SlideListView_UIView : UITableView<do_SlideListView_IView, doIUIModuleView>
//可根据具体实现替换UIView
{
	@private
		__weak do_SlideListView_UIModel *_model;
}
- (void)loadModuleJS;

@end
