begin
    numeric input = 0, counter = 0, loggedIn = 0
    begin
        login:
		display "Enter 1 to login" 
		display "Enter 2 to exit"
		get input
		begin
            If (input==1) Then
			   login()
            else if (input==2) Then
   			   goto exit.
            else
                print "invalid input"
                goto login.
		End
        begin
            if(loggedIn == 1) Then
            option:
			display "Enter 1 to scan item"
			display "Enter 2 to checkout"
			display "Enter 3 to logout"
			get input
            begin
				If (input==1) Then
                    scanItem()
      			else if (input==2) Then
				    checkout()
				else if(input==3)
					goto exit.
                else
                    goto option.
			end
            else
            goto login.display:
            display "Enter 1 to scan item"
            display "Enter 2 to checkout"
            display "Enter 3 to logout"

                begin
                get input
                If (input==1) Then
                   scanItem()
                Else if (input==2) Then
                   checkOut()
                Else if (input==3)
                   print "invalid input"
                        else
                            goto option;
                end if
        end                
    end
    exit:
end
			
		

		    
		