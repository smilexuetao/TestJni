package jni.test.com.testjni;

/**
 * Created by xt on 2017/4/8 0008.
 */

public class LoginUtils {


    public static String login() {

        return "微信登录调用";
    }

    public static  native void onResponse(String token);

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public static native String stringFromJNI();
}
