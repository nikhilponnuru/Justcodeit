
function init(){
document.getElementById("call").addEventListener("click", function(){
  

/*document.getElementById("1").style.display="none"
document.getElementById("2").style.display="none"
document.getElementById("3").style.display="none"
*/
//document.getElementById("user-home").style.marginTop="-50px";
var user_name = document.getElementsByName('rGroup');
var ischecked = false;
var selected_user=0;
for ( var i = 0; i < user_name.length; i++) {
    if(user_name[i].checked) {
        ischecked_method = true;
        selected_user=i;
        break;
    }
}

//document.getElementById("user-home").innerHTML = document.getElementById("user-home1").innerHTML;
document.getElementById("user-home").style.display="none"; 
document.getElementById("user-home1").style.display="block";









});
}




 function call_action(){

   var node =document.createElement('div');
       
      node.style.backgroundColor="#736AFF";
      node.style.width="250px"
      node.style.height="70px"
      node.innerHTML="&nbsp;&nbsp;&nbsp;CALLING";
       var element=document.getElementById("team-members");
      
       element.insertBefore(node,element.firstChild);

       document.getElementById("cb").style.display="none";
       document.getElementById("rb").style.display="block";
 }

function reject_action(){

  document.getElementById("user-home").style.display="block"; 
document.getElementById("user-home1").style.display="none";
var to_be_removed=document.getElementById("team-members");
to_be_removed.removeChild(to_be_removed.firstChild);

}

