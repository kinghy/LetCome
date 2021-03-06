package com.letcome.mode;

import com.gxq.tpm.network.NetworkProxy;
import com.gxq.tpm.network.RequestInfo;

import java.io.Serializable;

/**
 * Created by rjt on 16/9/8.
 */

public class MyProductsRes extends ProductsRes {

    public static class Params implements Serializable {



        private static final long serialVersionUID = -7118811436882564397L;

        String status;	//状态:0(发布)，1（正在售出），2（已售）,默认为全部
        String limit;   //默认20条	可选
        String pno;     // 第几页，默认为1	可选

        public String getStatus() {
            return status;
        }

        public void setStatus(String status) {
            this.status = status;
        }

        public String getLimit() {
            return limit;
        }

        public void setLimit(String limit) {
            this.limit = limit;
        }

        public String getPno() {
            return pno;
        }

        public void setPno(String pno) {
            this.pno = pno;
        }
    }

    public static void doRefreshRequest(Params params, NetworkProxy.ICallBack netBack) {
        NetworkProxy proxy = new NetworkProxy(netBack);
//   		Gson gson=new Gson();
//
//   		proxy.postRequest(RequestInfo.GET_AD.getOperationType(), ServiceConfig.getServiceUser(), gson.toJson(params), InspAdInfo.class, null, false, false);
        proxy.getRequest(RequestInfo.MY_PRODUCTS_REFRESH, params, MyProductsRes.class, RETURN_TYPE, true);
    }

    public static void doMoreRequest(Params params, NetworkProxy.ICallBack netBack) {
        NetworkProxy proxy = new NetworkProxy(netBack);
//   		Gson gson=new Gson();
//
//   		proxy.postRequest(RequestInfo.GET_AD.getOperationType(), ServiceConfig.getServiceUser(), gson.toJson(params), InspAdInfo.class, null, false, false);
        proxy.getRequest(RequestInfo.MY_PRODUCTS_MORE, params, MyProductsRes.class, RETURN_TYPE, true);
    }

}
