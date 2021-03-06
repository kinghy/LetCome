//
//  AppMarcp.h
//  QianFangGuJie
//
//  Created by  rjt on 15/5/25.
//  Copyright (c) 2015年 JYZD. All rights reserved.
//

#ifndef QianFangGuJie_AppMacro_h
#define QianFangGuJie_AppMacro_h

//配置文件存放地址
#define kConfig @"kConfig"
#define kConfigVersion @"kConfigVersion"

//已取得期指实盘验证
#define kHasIfQualification @"kHasIfQualification"

//上次消息查询保存key
#define kMsgQueryTime @"kMsgQueryTime"


//重复登录查询
#define kLoginRepeatQuery @"kLoginRepeatQuery"
#define kLoginRepeatVal 3

//券商数据库
#define kTradeDataVersion @"kTradeDataVersion"

//首次点买
#define KFirstBuy @"KFirstBuy"
//点击协议确认框
#define KAgreementBoxClicked @"KAgreementBoxClicked"
//合约版本号
#define KAgreementID @"KAgreementID"

//用户信息保存key
#define kEncryptedKey @"encryptedkey"
#define kUserInfo @"userinfo"
#define kUserNickName @"user_NickName"
#define kUserPhoneNumber @"user_phonenumber"
#define kUserLogo @"user_touxiang"
#define kUserId @"user_id"
#define kUserSessionid @"user_sessionid"
#define kUserHeadImg @"user_head_image"
#define kUserHeadUrl @"kUserHeadUrl"
//首页信息查询key
#define kMsgTimeQuery @"kMsgTimeQuery"

#define KEYBOARD_HEIGHT 80
#define PREDICTION_BAR_HEIGHT 40



//#define kDetailOrderMessage @"kDetailOrderMessage" //产品详情信息
//#define kRefreshOrderMessage @"kRefreshOrderMessage"//产品状态信息


//绑定失败
#define kBindCPBFail @"bindcpbfail"
//绑定成功
#define kBindCPBSuccess @"bingcpbsuccess"

#define kTimeTriggerHq @"kTimeTriggerHq" //修改触发价行情

#define kSellOperationView @"kSellOperationView" //点卖操作页（点卖行情界面）

#define kSellHqRefreshKey @"kSellHqRefreshKey" //点卖行情
#define kSellHqRefreshVal 3

//广告滚动
#define kScrollAdvTime @"kScrollAdvTime"
#define kScrollAdvKey @"kScrollAdvKey"
#define kScrollAdvVal 6

#define kScrollTradeInfoKey @"kScrollTradeInfo"
#define kScrollTradeInfoVal 6


#define kTradeInfoKey @"kTradeInfoKey"
#define kTradeInfoVal 15

//验证码错误
#define kCodeError @"code_error"

#define kInversterDict @"kInversterDict" //股票投资人信息


#define kHqChartOnceTaskKey @"kHqChartOnceTaskKey"   //股票行情图
#define kHqChartOnceTaskVal 60

#define kSellListTime @"kSellListTime" //点卖列表
#define kMultiSellListTime @"kMultiSellListTime" //批量点卖列表

#define kSellOrderStatusKey @"kSellOrderStatusKey"//点卖列表状态刷新
#define kSellOrderStatusVal 3

#define kMultiSellOrderStatusKey @"kMultiSellOrderStatusKey"//点卖列表状态刷新
#define kMultiSellOrderStatusVal 3

#define kSellConfirmTime @"kSellConfirmTime" //点卖确认页
#define kMultiSellConfirmTime @"kMultiSellConfirmTime" //点卖确认页

#define kHqKChartOnceTaskKey @"kHqKChartOnceTaskKey"  //股票K线图
#define kHqKChartOnceTaskVal 1

//盘口
#define kGlobalPankouKey @"jyzd_stock_global_pankou"
#define kGlobalPankouVal 3

#define kGlobalHqChartKey @"jyzd_stock_global_hqchart"
#define kGlobalHqChartVal 3

#define kGlobalKChartKey @"jyzd_stock_global_kchart"
#define kGlobalKChartVal 60

#define kToLogin @"tologin"

//session超时
#define kSessionTimeout @"session_timeout"

/** AppDelegate的弘 */
#define  kShareAppDelegate ((AppDelegate *)[UIApplication sharedApplication].delegate)

/** 登录页面切换宏 */
//#define kPasswordSwitchAccount @"kPasswordSwitchAccount"
//#define kPasswordSwitchForgetPwd @"kPasswordSwitchForgetPwd"

//登录成功
#define kLoginSuccessed @"kLoginSuccessed"
#define kExitSuccessed @"kExitSuccessed"

#define kCheckComplited @"kCheckComplited"

//登录Window隐藏后发消息
#define kPasswordWindowHide @"kPasswordWindowHide"
#define kPasswordWindowShow @"kPasswordWindowShow"

//跳转在线客服
#define kGoToServicesOnline @"kGoToServicesOnline"

//刷新产品状态通知
#define kTradeTimeChange @"kTradeTimeChange"

//刷新Dock消息提示
#define kDockChange @"kDockChange"

#define kStoCodeSH @"sh.999999"
#define kStoNameSH @"上证指数"

#define kStoCodeSZ @"399001"
#define kStoNameSZ @"深圳成指"

#define kStoCode300 @"399300"
#define kStoName300 @"沪深300"

//定义h5返回拦截
#define kH5Url2Simulation @"//type@a50authentication2stocksimulation"
#define kH5Url2Buy @"//type@a50authentication2buy"
#define kH5Url2Cer @"//type@gotoCer"

//需要认证
#define kNeedGo2Cer @"kNeedGo2Cer"

//导航栏颜色
#define kNavBgColor Color_Bg_RGB(255 ,255,255)
#define kNavDetailBgColor Color_Bg_RGB(80 ,140,240)
//标题文字颜色
#define kTitleColor Color_Bg_RGB(0 ,0 ,0 )

#define Color_Bg_Text_Chosed Color_Bg_RGB(80 ,140,240)

//手势密码
#define Color_Gesture_Failed Color_Bg_RGB(237.0f,93.0f, 124.0f)//红
#define Color_Gesture_Selected Color_Bg_RGB(70.0f,204.0f, 243.0f)//蓝色
#define Color_Gesture_Font Color_Bg_RGB(239.0f,246.0f, 255.0f)//蓝色

//按钮颜色
#define kBtnColor Color_Bg_RGB(80 ,140,240)
#define kBtnDisableColor Color_Bg_RGB(224,224,224)
#define kBtnTextDisableColor Color_Bg_RGB(190,190,190)

//文字颜色
#define kTextColor Color_Bg_RGB(80 ,140,240)
#define kBtnChooseTextColor Color_Bg_RGB(117 ,117,117)

//链接色
#define kLinkColor Color_Bg_RGB(10,130,250)

#define GRAY_BG_COLOR Color_Bg_RGB(247.0f,247.0f, 247.0f)//蓝色

#define kCandleTouchEnd @"kCandleTouchEnd"
#define kCandleTouchBegan @"kCandleTouchBegan"

#define kSSOLoginNotification @"kSSOLoginNotification"

#define kChangeDockExcuteIndex @"kChangeDockExcuteIndex"
#define kExcuteEndEmptyList @"kExcuteEndEmptyList"
#define kExcuteEndHasList @"kExcuteEndHasList"
#define kChangeChoseStock @"kChangeChoseStock"
#define kRefreshChoseStock @"kRefreshChoseStock"

#define kHotFixDownCompKey @"kHotFixDownCompKey"
#define kHotFixKey @"kHotFixKey"

#define kAlertView @"kAlertView"

#define kSellKeyBoardHide @"kSellKeyBoardHide"
#define kSellKeyBoardChoseAll @"kSellKeyBoardChoseAll"
#define kSellKeyBoardConfirm @"kSellKeyBoardConfirm"

#define KBuildKeyBoardConfirm @"KBuildKeyBoardConfirm"
#define KBuildKeyBoardChooseAll @"KBuildKeyBoardChooseAll"
#define KBuildKeyBOardHide @"KBuildKeyBOardHide"

#define kOrderSelled @"kOrderSelled"
#define KApplySelled @"KApplySelled"

#endif
