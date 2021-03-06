package com.letcome.vo;

import java.sql.Blob;

import javax.persistence.*;

/**
 * Created by rjt on 16/8/12.
 */

@Entity(name="images")
public class ImageVO {

    public static final String IMAGE_TYPE_THUMB = "thumb";
    public static final String IMAGE_TYPE_FULL = "full";

    public ImageVO(){
        super();
    }
    @Id
    @GeneratedValue(strategy= GenerationType.AUTO)
    @Column(name="id")
    private Integer id;

    @Column(name="uid",nullable = false)
    private Integer uid;

    @Column(name="imagename",nullable = false)
    private String imagename;


    @Column(name="imageheight",nullable = false)
    private Integer imageheight;
    @Column(name="imagewidth",nullable = false)
    private Integer imagewidth;

    @Column(name="thumbheight",nullable = false)
    private Integer thumbheight;
    @Column(name="thumbwidth",nullable = false)
    private Integer thumbwidth;

    @Column( name = "imagepath",nullable = false)
//    @Column(name="image",columnDefinition="LONGBLOB",nullable = false)
    private String imagepath;

    @Column( name = "thumbpath",nullable = false)
//    @Column(name="image",columnDefinition="LONGBLOB",nullable = false)
    private String thumbpath;

    @Column(name="productid",nullable = true)
    private Integer productid;

    public Integer getProductid() {
        return productid;
    }

    public void setProductid(Integer productid) {
        this.productid = productid;
    }

    public Integer getId() {
        return id;
    }

    public void setId(Integer id) {
        this.id = id;
    }

    public Integer getUid() {
        return uid;
    }

    public void setUid(Integer uid) {
        this.uid = uid;
    }

    public String getImagename() {
        return imagename;
    }

    public void setImagename(String imagename) {
        this.imagename = imagename;
    }

    public String getImagepath() {
        return imagepath;
    }

    public void setImagepath(String imagepath) {
        this.imagepath = imagepath;
    }

    public String getThumbpath() {
        return thumbpath;
    }

    public void setThumbpath(String thumbpath) {
        this.thumbpath = thumbpath;
    }

    public Integer getImageheight() {
        return imageheight;
    }

    public void setImageheight(Integer imageheight) {
        this.imageheight = imageheight;
    }

    public Integer getImagewidth() {
        return imagewidth;
    }

    public void setImagewidth(Integer imagewidth) {
        this.imagewidth = imagewidth;
    }

    public Integer getThumbheight() {
        return thumbheight;
    }

    public void setThumbheight(Integer thumbheight) {
        this.thumbheight = thumbheight;
    }

    public Integer getThumbwidth() {
        return thumbwidth;
    }

    public void setThumbwidth(Integer thumbwidth) {
        this.thumbwidth = thumbwidth;
    }
}
