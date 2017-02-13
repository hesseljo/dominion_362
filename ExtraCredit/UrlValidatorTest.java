/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


import java.net.MalformedURLException;
import java.net.URL;
import java.util.Random;

import junit.framework.TestCase;





/**
 * Performs Validation Test for url validations.
 *
 * @version $Revision: 1128446 $ $Date: 2011-05-27 13:29:27 -0700 (Fri, 27 May 2011) $
 */
public class UrlValidatorTest extends TestCase {

   private boolean printStatus = false;
   private boolean printIndex = false;//print index that indicates current scheme,host,port,path, query test were using.
private String protocol[];

   public UrlValidatorTest(String testName) {
      super(testName);
   }

   /*
    * 
    * EXTRA CREDIT Test Case for Random Generator for valid URLs
    * 
    */
   public void testRandomValidUrl() throws MalformedURLException {
		  
	   int count = 0;
	   while (count <= 500) { //set number of random iterations

		  /* 
		   * Randomly Generates valid URLs
		   */
		  UrlValidator url = new UrlValidator (null, null, UrlValidator.ALLOW_ALL_SCHEMES);
		  
		  String start = "www.";
		  String end = ".com";
		  
		  //randomly generate strings for domain name
		  Random ranD = new Random();
		  String characters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"; 
		  int minimum = 10;
		  int maximum = 50;
		  int length = minimum + (int)(Math.random() * maximum); 
		  
	      char[] text = new char[length];
	      for (int i = 0; i < length; i++)
	      {
	          text[i] = characters.charAt(ranD.nextInt(characters.length()));
	      }
	      String domainR = new String(text);
	
		  //randomly generate protocols
	      String protocol[] = {"http", "https", "ftp"};
		  Random ranP = new Random();
		  int randomIndex = ranP.nextInt(protocol.length);
		  String protocolR = protocol[randomIndex];
		  
		  //Build the URL
		  URL myURL = new URL(protocolR, start, domainR);
		  String myRandomURL = myURL.toString();
	
		  System.out.println(myRandomURL + end);
		  System.out.println(url.isValid(myRandomURL + end));
		  
		  count = count +1;//increment count 
	   }
	  
   }
   
   
   public void testManualTest()
   {
	   UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
	   System.out.println(urlVal.isValid("http://www.amazon.com")); // test valid URL and return true
   }
      
   public void testYourFirstPartition()
   {
	   
   }
   
   public void testYourSecondPartition(){
	   
   }
   
   
   public void testIsValid()
   {
	   for(int i = 0;i<10000;i++)
	   {
		   
	   }
   }
   
   public void testAnyOtherUnitTest()
   {
	   
   }
   /**
    * Create set of tests by taking the testUrlXXX arrays and
    * running through all possible permutations of their combinations.
    *
    * @param testObjects Used to create a url.
    */
   

}
