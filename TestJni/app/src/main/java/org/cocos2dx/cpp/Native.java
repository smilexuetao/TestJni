package org.cocos2dx.cpp;

/**
 * Created by Administrator on 2017/4/15 0015.
 */

public class Native {

    /**
     * 获取微信授权
     */
    public  static void fetchWeChatAuth() {

    }

    public static native void onResp(String code);

    public static void shareWeiXin(String params) {

    }


    public static native void onBatteryResp(int battery);

    /**
     * 正在通话中...
     * 需要在c++层实现onCallResp
     */
    public static native void onCallResp(int status);
}
