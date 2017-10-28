package com.moreal.exception;

public class NEFileCreateException extends Exception{
	/**
	 * When You use NoException function, it will be called;
	 */
	private static final long serialVersionUID = 8107350572303997422L;
	private final int ERR_Code;
	private String msg;
	
	public NEFileCreateException(String msg, int err_code)
	{
		this.msg = msg;
		ERR_Code = err_code;
	}
	
	public NEFileCreateException(String msg)
	{
		this(msg, 100);
	}
	
	public int getErrCode()
	{
		return ERR_Code;
	}
	
	public String getMsg()
	{
		return msg;
	}
}
